
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_cksum_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*,int,int *) ;
 int FUNC_3 (void*,int,int *) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(libzfs_handle_t *VAR_3, int VAR_4, void *VAR_5, int VAR_6,
    boolean_t VAR_7, zio_cksum_t *VAR_8)
{
 char *VAR_9 = VAR_5;
 int VAR_10;
 int VAR_11 = VAR_6;

 FUNC_0(VAR_6 <= VAR_1);

 do {
  VAR_10 = FUNC_4(VAR_4, VAR_9, VAR_11);
  VAR_9 += VAR_10;
  VAR_11 -= VAR_10;
 } while (VAR_10 > 0);

 if (VAR_10 < 0 || VAR_11 != 0) {
  FUNC_6(VAR_3, FUNC_1(VAR_2,
      "failed to read from stream"));
  return (FUNC_5(VAR_3, VAR_0, FUNC_1(VAR_2,
      "cannot receive")));
 }

 if (VAR_8) {
  if (VAR_7)
   (void) FUNC_2(VAR_5, VAR_6, VAR_8);
  else
   (void) FUNC_3(VAR_5, VAR_6, VAR_8);
 }
 return (0);
}
