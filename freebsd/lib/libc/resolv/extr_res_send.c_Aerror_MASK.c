
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int sbuf ;
typedef TYPE_1__* res_state ;
typedef int hbuf ;
struct TYPE_3__ {unsigned int options; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char const*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (struct sockaddr const*,int,char*,int,char*,int,int ) ;
 int VAR_4 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(const res_state VAR_5, FILE *VAR_6, const char *VAR_7, int VAR_8,
       const struct sockaddr *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_3;
 char VAR_12[VAR_0];
 char VAR_13[VAR_1];

 if ((VAR_5->options & VAR_2) != 0U) {
  if (FUNC_1(VAR_9, VAR_10, VAR_12, sizeof(VAR_12),
      VAR_13, sizeof(VAR_13), VAR_4)) {
   FUNC_3(VAR_12, "?", sizeof(VAR_12) - 1);
   VAR_12[sizeof(VAR_12) - 1] = '\0';
   FUNC_3(VAR_13, "?", sizeof(VAR_13) - 1);
   VAR_13[sizeof(VAR_13) - 1] = '\0';
  }
  FUNC_0(VAR_6, "res_send: %s ([%s].%s): %s\n",
   VAR_7, VAR_12, VAR_13, FUNC_2(VAR_8));
 }
 VAR_3 = VAR_11;
}
