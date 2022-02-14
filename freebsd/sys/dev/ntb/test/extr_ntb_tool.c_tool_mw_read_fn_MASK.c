
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_mw {char size; } ;
struct sysctl_req {int dummy; } ;
struct sbuf {int s_error; } ;
typedef char ssize_t ;


 char VAR_0 ;
 int FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 struct sbuf* FUNC_2 (int *,int *,char,struct sysctl_req*) ;
 int FUNC_3 (struct sbuf*,char*,...) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct sysctl_req *VAR_1, struct tool_mw *VAR_2, char *VAR_3,
    int *VAR_4, ssize_t VAR_5, ssize_t VAR_6, char *VAR_7)
{
 ssize_t VAR_8, VAR_9;
 struct sbuf *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 char *VAR_14;


 if (*VAR_4 == 0)
  return (0);


 VAR_8 = VAR_5;
 VAR_14 = VAR_3;
 VAR_14 += VAR_8;
 VAR_12 = ((VAR_6 == 0) || (VAR_6 > VAR_0)) ?
     VAR_0 : VAR_6;




 VAR_9 = VAR_12 + 256;
 VAR_10 = FUNC_2(((void*)0), ((void*)0), VAR_9, VAR_1);
 if (VAR_10 == ((void*)0)) {
  VAR_13 = VAR_10->s_error;
  return (VAR_13);
 }

 if (!FUNC_4(VAR_7, "mw"))
  FUNC_3(VAR_10, "\nConfigured MW size\t: %zu\n", VAR_2->size);
 else if (!FUNC_4(VAR_7, "peer_mw"))
  FUNC_3(VAR_10, "\nConfigured Peer MW size\t: %zu\n",
      VAR_2->size);
 FUNC_3(VAR_10, "R/W size\t\t: %zi\nR/W Offset\t\t: %zi\n\nData\n----"
     "->", VAR_6, VAR_5);
 for (VAR_11 = 0 ; VAR_11 < VAR_12; VAR_11++) {
  if ((VAR_11 % 32) == 0) {
   FUNC_3(VAR_10, "\n%08zx:", VAR_8);
   VAR_8 += 32;
  }
  if ((VAR_11 % 8) == 0)
   FUNC_3(VAR_10, "    ");
  FUNC_3(VAR_10, "%02hhx", *(VAR_14+VAR_11));
 }
 if (VAR_6 > VAR_0)
  FUNC_3(VAR_10, "\n\nNOTE: Truncating read size %zi->1024 "
      "bytes\n", VAR_6);


 *VAR_4 -= 1;
 VAR_13 = FUNC_1(VAR_10);
 FUNC_0(VAR_10);

 return (VAR_13);
}
