
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct gctl_req_arg {char* name; int nlen; int flag; int len; scalar_t__ value; } ;
struct gctl_req {char* error; unsigned int narg; struct gctl_req_arg* arg; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;

void
FUNC_2(struct gctl_req *VAR_3, FILE *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;
 struct gctl_req_arg *VAR_7;

 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_4, "Dump of gctl request at NULL\n");
  return;
 }
 FUNC_1(VAR_4, "Dump of gctl request at %p:\n", VAR_3);
 if (VAR_3->error != ((void*)0))
  FUNC_1(VAR_4, "  error:\t\"%s\"\n", VAR_3->error);
 else
  FUNC_1(VAR_4, "  error:\tNULL\n");
 for (VAR_5 = 0; VAR_5 < VAR_3->narg; VAR_5++) {
  VAR_7 = &VAR_3->arg[VAR_5];
  FUNC_1(VAR_4, "  param:\t\"%s\" (%d)", VAR_7->name, VAR_7->nlen);
  FUNC_1(VAR_4, " [%s%s",
      VAR_7->flag & VAR_1 ? "R" : "",
      VAR_7->flag & VAR_2 ? "W" : "");
  FUNC_0(VAR_4);
  if (VAR_7->flag & VAR_0)
   FUNC_1(VAR_4, "%d] = \"%s\"", VAR_7->len, (char *)VAR_7->value);
  else if (VAR_7->len > 0) {
   FUNC_1(VAR_4, "%d] = ", VAR_7->len);
   FUNC_0(VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_7->len; VAR_6++) {
    FUNC_1(VAR_4, " %02x", ((u_char *)VAR_7->value)[VAR_6]);
   }
  } else {
   FUNC_1(VAR_4, "0] = %p", VAR_7->value);
  }
  FUNC_1(VAR_4, "\n");
 }
}
