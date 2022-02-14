
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vdstat {int dummy; } ;
struct vdlinkage {int dummy; } ;
struct vddrv {struct vdlinkage* vdd_vdtab; } ;
struct streamtab {TYPE_2__* st_rdinit; } ;
struct fmodsw {char* f_name; struct streamtab* f_str; } ;
typedef int addr_t ;
struct TYPE_6__ {char* Drv_name; } ;
struct TYPE_5__ {TYPE_1__* qi_minfo; } ;
struct TYPE_4__ {char* mi_idname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,int) ;



 int VAR_5 ;
 struct streamtab VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_3 (char*,char*,...) ;
 char* VAR_8 ;

int
FUNC_4(
 unsigned int VAR_9,
 struct vddrv *VAR_10,
 addr_t VAR_11,
 struct vdstat *VAR_12
 )
{
 extern struct fmodsw VAR_13[];
 extern int VAR_14;

 struct fmodsw *VAR_15 = VAR_13;
 struct fmodsw *VAR_16 = &VAR_13[VAR_14];
 struct fmodsw *VAR_17 = (struct fmodsw *)0;
 char *VAR_18 = VAR_6.st_rdinit->qi_minfo->mi_idname;

 switch (VAR_9)
 {
     case 130:
  VAR_10->vdd_vdtab = (struct vdlinkage *)&VAR_7;




  while (VAR_15 <= VAR_16)
  {
   if (!FUNC_1(VAR_15->f_name, VAR_18, VAR_4))
   {
    FUNC_3("vddrinit[%s]: STREAMS module already loaded.\n", VAR_18);
    return(VAR_0);
   }
   else
       if ((VAR_17 == (struct fmodsw *)0) &&
    (VAR_15->f_name[0] == '\0') &&
    (VAR_15->f_str == (struct streamtab *)0))
       {



        VAR_17 = VAR_15;
        break;
       }
   VAR_15++;
  }

  if (VAR_17 == (struct fmodsw *)0)
  {
   FUNC_3("vddrinit[%s]: no slot free for STREAMS module\n", VAR_18);
   return (VAR_2);
  }
  else
  {
   static char VAR_19[] = "4.7";
   char *VAR_20, *VAR_21, *VAR_22;

   VAR_20 = VAR_8;

   FUNC_2(VAR_17->f_name, VAR_18, VAR_4);
   VAR_17->f_name[VAR_4] = '\0';
   VAR_17->f_str = &VAR_6;





   VAR_20 = VAR_19;
   if (*VAR_20 == '$')
   {




    while (*VAR_20 && (*VAR_20 != ' '))
    {
     VAR_20++;
    }
    if (*VAR_20 == ' ') VAR_20++;
   }

   VAR_22 = VAR_7.Drv_name;
   while (*VAR_22 && (*VAR_22 != ' '))
   {
    VAR_22++;
   }
   if (*VAR_22 == ' ') VAR_22++;

   VAR_21 = VAR_20;
   while (*VAR_21 && (((*VAR_21 >= '0') && (*VAR_21 <= '9')) || (*VAR_21 == '.')))
   {
    VAR_21++;
   }

   if (*VAR_20 && *VAR_22 && (VAR_21 > VAR_20))
   {
    if (FUNC_0(VAR_22) >= (VAR_21 - VAR_20))
    {
     (void) FUNC_2(VAR_22, VAR_20, VAR_21 - VAR_20);
    }
   }
   return (0);
  }
  break;

     case 128:
  if (VAR_5 > 0)
  {
   FUNC_3("vddrinit[%s]: STREAMS module has still %d instances active.\n", VAR_18, VAR_5);
   return (VAR_0);
  }
  else
  {
   while (VAR_15 <= VAR_16)
   {
    if (!FUNC_1(VAR_15->f_name, VAR_18, VAR_4))
    {



     VAR_15->f_name[0] = '\0';
     VAR_15->f_str = (struct streamtab *)0;
     VAR_15++;

     break;
    }
    VAR_15++;
   }
   if (VAR_15 > VAR_16)
   {
    FUNC_3("vddrinit[%s]: cannot find entry for STREAMS module\n", VAR_18);
    return (VAR_3);
   }
   else
       return (0);
  }


     case 129:
  return (0);

     default:
  return (VAR_1);

 }
 return VAR_1;
}
