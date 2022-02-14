
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_sha512_context ;
typedef int br_sha384_context ;
typedef int br_sha256_context ;
typedef int br_sha224_context ;
typedef int br_sha1_context ;
typedef int br_md5_context ;


 int VAR_0 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void const*,size_t) ;

 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,void const*,size_t) ;

 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,void const*,size_t) ;

 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void*) ;
 int FUNC_11 (int *,void const*,size_t) ;

 int FUNC_12 (int *) ;
 int FUNC_13 (int *,void*) ;
 int FUNC_14 (int *,void const*,size_t) ;

 int FUNC_15 (int *) ;
 int FUNC_16 (int *,void*) ;
 int FUNC_17 (int *,void const*,size_t) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_20(int VAR_2, const void *VAR_3, size_t VAR_4, void *VAR_5)
{
 br_md5_context VAR_6;
 br_sha1_context VAR_7;
 br_sha224_context VAR_8;
 br_sha256_context VAR_9;
 br_sha384_context VAR_10;
 br_sha512_context VAR_11;

 switch (VAR_2) {
 case 133:
  FUNC_0(&VAR_6);
  FUNC_2(&VAR_6, VAR_3, VAR_4);
  FUNC_1(&VAR_6, VAR_5);
  return 16;
 case 132:
  FUNC_3(&VAR_7);
  FUNC_5(&VAR_7, VAR_3, VAR_4);
  FUNC_4(&VAR_7, VAR_5);
  return 20;
 case 131:
  FUNC_6(&VAR_8);
  FUNC_8(&VAR_8, VAR_3, VAR_4);
  FUNC_7(&VAR_8, VAR_5);
  return 28;
 case 130:
  FUNC_9(&VAR_9);
  FUNC_11(&VAR_9, VAR_3, VAR_4);
  FUNC_10(&VAR_9, VAR_5);
  return 32;
 case 129:
  FUNC_12(&VAR_10);
  FUNC_14(&VAR_10, VAR_3, VAR_4);
  FUNC_13(&VAR_10, VAR_5);
  return 48;
 case 128:
  FUNC_15(&VAR_11);
  FUNC_17(&VAR_11, VAR_3, VAR_4);
  FUNC_16(&VAR_11, VAR_5);
  return 64;
 default:
  FUNC_19(VAR_1, "Uknown hash function: %d\n", VAR_2);
  FUNC_18(VAR_0);
  return 0;
 }
}
