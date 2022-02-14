
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keyInstance ;
typedef int cipherInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,int *,void*,int,void*) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int,void*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
 keyInstance VAR_6;
 cipherInstance VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(&VAR_7, VAR_1, ((void*)0));
 if (VAR_8 <= 0)
  FUNC_0(1, "rijndael_cipherInit=%d", VAR_8);
 VAR_8 = FUNC_3(&VAR_6, VAR_0, VAR_4, VAR_5);
 if (VAR_8 <= 0)
  FUNC_0(1, "rijndael_makeKeY=%d", VAR_8);
 VAR_8 = FUNC_1(&VAR_7, &VAR_6, VAR_2, VAR_3 * 8, VAR_2);
 if (VAR_8 <= 0)
  FUNC_0(1, "rijndael_blockEncrypt=%d", VAR_8);
}
