
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fd; int fname; } ;
struct TYPE_3__ {scalar_t__ dupfd; } ;
union node {scalar_t__ type; TYPE_2__ nfile; TYPE_1__ ndup; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(union node *VAR_2, const char *VAR_3, int VAR_4)
{
 char VAR_5[2];

 if (VAR_2->nfile.fd != VAR_4) {
  VAR_5[0] = VAR_2->nfile.fd + '0';
  VAR_5[1] = '\0';
  FUNC_0(VAR_5);
 }
 FUNC_0(VAR_3);
 if (VAR_2->type == VAR_1 || VAR_2->type == VAR_0) {
  if (VAR_2->ndup.dupfd >= 0)
   VAR_5[0] = VAR_2->ndup.dupfd + '0';
  else
   VAR_5[0] = '-';
  VAR_5[1] = '\0';
  FUNC_0(VAR_5);
 } else {
  FUNC_1(VAR_2->nfile.fname);
 }
}
