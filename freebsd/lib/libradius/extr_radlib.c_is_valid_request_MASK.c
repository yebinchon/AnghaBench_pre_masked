
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct rad_server {int* secret; } ;
struct rad_handle {size_t srv; size_t in_len; int* in; struct rad_server* servers; } ;
typedef int MD5_CTX ;
typedef int HMAC_CTX ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int *) ;
 int FUNC_5 (int *,int*,int,int ,int *) ;
 int FUNC_6 (int *,int*,int) ;
 int VAR_1 ;
 int FUNC_7 (unsigned char*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 (int*,unsigned char*,int) ;
 int FUNC_11 (int*,scalar_t__*,int) ;
 int FUNC_12 (int*,int ,int) ;
 int FUNC_13 (int*) ;

__attribute__((used)) static int
FUNC_14(struct rad_handle *VAR_10)
{
 MD5_CTX VAR_11;
 unsigned char VAR_12[VAR_2];
 const struct rad_server *VAR_13;
 int VAR_14;







 VAR_13 = &VAR_10->servers[VAR_10->srv];


 if (VAR_10->in_len < VAR_4)
  return (0);
 VAR_14 = VAR_10->in[VAR_7] << 8 | VAR_10->in[VAR_7+1];
 if (VAR_14 > VAR_10->in_len)
  return (0);

 if (VAR_10->in[VAR_6] != VAR_8) {
  uint32_t VAR_15[4] = { 0, 0, 0, 0 };

  FUNC_8(&VAR_11);
  FUNC_9(&VAR_11, &VAR_10->in[VAR_6], VAR_5 - VAR_6);
  FUNC_9(&VAR_11, VAR_15, VAR_1);
  FUNC_9(&VAR_11, &VAR_10->in[VAR_4], VAR_14 - VAR_4);
  FUNC_9(&VAR_11, VAR_13->secret, FUNC_13(VAR_13->secret));
  FUNC_7(VAR_12, &VAR_11);
  if (FUNC_10(&VAR_10->in[VAR_5], VAR_12, sizeof VAR_12) != 0)
   return (0);
 }
 return (1);
}
