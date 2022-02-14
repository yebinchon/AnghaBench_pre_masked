
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;
struct ssh {int dummy; } ;
struct hook_ctx {int* s2c; int* c2s; int trigger_direction; int packet_index; int * dump_path; int * replace_data; struct ssh* client; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int*,int,int,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct sshbuf*,int ) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (struct sshbuf*) ;
 int* FUNC_9 (struct sshbuf*) ;
 int FUNC_10 (struct sshbuf*,int *) ;
 int FUNC_11 (struct sshbuf*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_12(struct ssh *VAR_4, struct sshbuf *VAR_5, u_char *VAR_6, void *VAR_7)
{
 struct hook_ctx *VAR_8 = (struct hook_ctx *)VAR_7;
 int VAR_9 = VAR_4 == VAR_8->client ? VAR_1 : VAR_0;
 int *VAR_10 = VAR_9 == VAR_1 ? VAR_8->s2c : VAR_8->c2s;
 FILE *VAR_11;
 int VAR_12;

 if (VAR_2) {
  FUNC_5("%s packet %d type %u:\n",
      VAR_9 == VAR_1 ? "s2c" : "c2s",
      *VAR_10, *VAR_6);
  FUNC_6(VAR_5, VAR_3);
 }
 if (VAR_9 == VAR_8->trigger_direction &&
     VAR_8->packet_index == *VAR_10) {
  if (VAR_8->replace_data != ((void*)0)) {
   FUNC_11(VAR_5);

   if ((VAR_12 = FUNC_7(VAR_8->replace_data,
       VAR_6)) != 0 ||
       (VAR_12 = FUNC_10(VAR_5, VAR_8->replace_data)) != 0)
    return VAR_12;
   if (VAR_2) {
    FUNC_5("***** replaced packet type %u\n",
        *VAR_6);
    FUNC_6(VAR_5, VAR_3);
   }
  } else if (VAR_8->dump_path != ((void*)0)) {
   if ((VAR_11 = FUNC_3(VAR_8->dump_path, "w+")) == ((void*)0))
    FUNC_0(1, "fopen %s", VAR_8->dump_path);

   if (FUNC_4(VAR_6, 1, 1, VAR_11) != 1)
    FUNC_0(1, "fwrite type %s", VAR_8->dump_path);
   if (FUNC_8(VAR_5) != 0 &&
       FUNC_4(FUNC_9(VAR_5), FUNC_8(VAR_5),
       1, VAR_11) != 1)
    FUNC_0(1, "fwrite body %s", VAR_8->dump_path);
   if (VAR_2) {
    FUNC_5("***** dumped packet type %u len %zu\n",
        *VAR_6, FUNC_8(VAR_5));
   }
   FUNC_2(VAR_11);

   FUNC_1(0);
  }
 }
 (*VAR_10)++;
 return 0;
}
