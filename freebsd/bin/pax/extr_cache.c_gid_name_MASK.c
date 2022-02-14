
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct group {int gr_gid; } ;
typedef int gid_t ;
struct TYPE_3__ {scalar_t__ valid; char* name; int gid; } ;
typedef TYPE_1__ GIDC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct group* FUNC_0 (char*) ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;

int
FUNC_8(char *VAR_6, gid_t *VAR_7)
{
 struct group *VAR_8;
 GIDC *VAR_9;
 int VAR_10;




 if (((VAR_10 = FUNC_6(VAR_6)) == 0) || (VAR_6[0] == '\0'))
  return(-1);
 if ((VAR_5 == ((void*)0)) && (FUNC_1() < 0))
  return(-1);





 VAR_9 = VAR_5[FUNC_4(VAR_6, VAR_10, VAR_0)];
 if ((VAR_9 != ((void*)0)) && (VAR_9->valid > 0) && !FUNC_5(VAR_6, VAR_9->name)) {
  if (VAR_9->valid == VAR_2)
   return(-1);
  *VAR_7 = VAR_9->gid;
  return(0);
 }

 if (!VAR_4) {
  FUNC_3(1);
  ++VAR_4;
 }
 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_5[FUNC_4(VAR_6, VAR_10, VAR_0)] =
    (GIDC *)FUNC_2(sizeof(GIDC));





 if (VAR_9 == ((void*)0)) {
  if ((VAR_8 = FUNC_0(VAR_6)) == ((void*)0))
   return(-1);
  *VAR_7 = VAR_8->gr_gid;
  return(0);
 }

 (void)FUNC_7(VAR_9->name, VAR_6, VAR_1 - 1);
 VAR_9->name[VAR_1-1] = '\0';
 if ((VAR_8 = FUNC_0(VAR_6)) == ((void*)0)) {
  VAR_9->valid = VAR_2;
  return(-1);
 }
 VAR_9->valid = VAR_3;
 *VAR_7 = VAR_9->gid = VAR_8->gr_gid;
 return(0);
}
