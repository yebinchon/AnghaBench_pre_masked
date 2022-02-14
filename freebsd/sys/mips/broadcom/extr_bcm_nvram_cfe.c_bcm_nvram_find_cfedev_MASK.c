
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bcm_nvram_iocfe {int io; } ;
typedef int bhnd_nvram_data_class ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bcm_nvram_iocfe*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 size_t FUNC_5 (void**) ;
 void** VAR_2 ;
 void** VAR_3 ;

int
FUNC_6(struct bcm_nvram_iocfe *VAR_4,
    bhnd_nvram_data_class **VAR_5)
{
 char *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;

 for (u_int VAR_10 = 0; VAR_10 < FUNC_5(VAR_3); VAR_10++) {
  *VAR_5 = VAR_3[VAR_10];

  for (u_int VAR_11 = 0; VAR_11 < FUNC_5(VAR_2); VAR_11++) {
   VAR_6 = VAR_2[VAR_11];


   if ((VAR_7 = FUNC_4(VAR_6)) < 0) {
    if (VAR_7 != VAR_0) {
     FUNC_0("cfe_getdevinfo(%s) failed: "
         "%d\n", VAR_6, VAR_7);
    }

    continue;
   }


   if ((VAR_8 = FUNC_1(VAR_4, VAR_6)))
    continue;


   VAR_9 = FUNC_2(*VAR_5, &VAR_4->io);
   if (VAR_9 <= 0) {

    return (0);
   }


   FUNC_3(&VAR_4->io);
  }
 }

 return (VAR_1);
}
