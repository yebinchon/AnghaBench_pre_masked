
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cam_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,...) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 cam_status VAR_10;





 VAR_10 = FUNC_2(VAR_0, VAR_5, ((void*)0), ((void*)0));

 if (VAR_10 != VAR_1) {
  FUNC_1("nda: Failed to attach master async callback "
         "due to status 0x%x!\n", VAR_10);
 } else if (VAR_4) {


  if ((FUNC_0(VAR_8, VAR_7,
        ((void*)0), VAR_2)) == ((void*)0))
      FUNC_1("ndainit: power event registration failed!\n");
  if ((FUNC_0(VAR_9, VAR_6,
        ((void*)0), VAR_3)) == ((void*)0))
      FUNC_1("ndainit: shutdown event registration failed!\n");
 }
}
