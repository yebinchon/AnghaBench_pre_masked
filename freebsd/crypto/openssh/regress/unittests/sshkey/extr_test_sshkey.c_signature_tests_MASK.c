
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;
typedef int lens ;


 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (struct sshkey*,struct sshkey*,char const*,int*,size_t) ;
 int FUNC_2 (struct sshkey*) ;
 int FUNC_3 (char*,int ,size_t) ;

__attribute__((used)) static void
FUNC_4(struct sshkey *VAR_0, struct sshkey *VAR_1, const char *VAR_2)
{
 u_char VAR_3, VAR_4[2049];
 size_t VAR_5[] = {
  1, 2, 7, 8, 9, 15, 16, 17, 31, 32, 33, 127, 128, 129,
  255, 256, 257, 1023, 1024, 1025, 2047, 2048, 2049
 };

 for (VAR_3 = 0; VAR_3 < (sizeof(VAR_5)/sizeof(VAR_5[0])); VAR_3++) {
  FUNC_3("%s key, banana length %zu",
      FUNC_2(VAR_0), VAR_5[VAR_3]);
  FUNC_0(VAR_4, VAR_5[VAR_3]);
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5[VAR_3]);
 }
}
