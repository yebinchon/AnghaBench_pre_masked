
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_server {unsigned char* secret; } ;
struct rad_handle {int pass_len; unsigned char* out; int pass_pos; unsigned char* pass; struct rad_server* servers; } ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (unsigned char*,unsigned char*,int ) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static void
FUNC_5(struct rad_handle *VAR_3, int VAR_4)
{
 MD5_CTX VAR_5;
 unsigned char VAR_6[VAR_1];
 const struct rad_server *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = &VAR_3->servers[VAR_4];
 VAR_8 = VAR_3->pass_len == 0 ? 16 : (VAR_3->pass_len+15) & ~0xf;

 FUNC_3(VAR_6, &VAR_3->out[VAR_2], VAR_0);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += 16) {
  int VAR_10;


  FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, VAR_7->secret, FUNC_4(VAR_7->secret));
  FUNC_2(&VAR_5, VAR_6, 16);
  FUNC_0(VAR_6, &VAR_5);







  for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
   VAR_3->out[VAR_3->pass_pos + VAR_9 + VAR_10] =
       VAR_6[VAR_10] ^= VAR_3->pass[VAR_9 + VAR_10];
 }
}
