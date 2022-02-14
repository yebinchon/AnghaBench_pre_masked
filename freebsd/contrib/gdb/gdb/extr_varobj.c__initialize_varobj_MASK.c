
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;

void
FUNC_4 (void)
{
  int VAR_7 = sizeof (struct vlist *) * VAR_0;

  VAR_5 = FUNC_3 (VAR_7);
  FUNC_2 (VAR_5, 0, VAR_7);

  FUNC_1 (FUNC_0 ("debugvarobj", VAR_1, VAR_4, (char *) &VAR_6, "Set varobj debugging.\nWhen non-zero, varobj debugging is enabled.", &VAR_2),

       &VAR_3);
}
