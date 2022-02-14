
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cam_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2(void)
{
 cam_status VAR_3;





 VAR_3 = FUNC_1(VAR_0, VAR_2, ((void*)0), ((void*)0));

 if (VAR_3 != VAR_1) {
  FUNC_0("enc: Failed to attach master async callback "
         "due to status 0x%x!\n", VAR_3);
 }
}
