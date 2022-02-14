
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dupfd; } ;
struct TYPE_3__ {int fd; scalar_t__ type; union node* next; } ;
union node {TYPE_2__ ndup; TYPE_1__ nfile; } ;
struct redirtab {int* renamed; int fd0_redirected; struct redirtab* next; scalar_t__ empty_redirs; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct redirtab* FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (union node*,char*) ;
 int * VAR_13 ;
 int * VAR_14 ;
 struct redirtab* VAR_15 ;
 char* FUNC_4 (int) ;

void
FUNC_5(union node *VAR_16, int VAR_17)
{
 union node *VAR_18;
 struct redirtab *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21;
 char VAR_22[10];

 VAR_3;
 for (VAR_20 = 10 ; --VAR_20 >= 0 ; )
  VAR_22[VAR_20] = 0;
 VAR_22[1] = VAR_17 & VAR_7;
 if (VAR_17 & VAR_8) {
  VAR_9++;
  if (VAR_16 != ((void*)0)) {
   VAR_19 = FUNC_0(sizeof (struct redirtab));
   for (VAR_20 = 0 ; VAR_20 < 10 ; VAR_20++)
    VAR_19->renamed[VAR_20] = VAR_1;
   VAR_19->fd0_redirected = VAR_11;
   VAR_19->empty_redirs = VAR_9 - 1;
   VAR_19->next = VAR_15;
   VAR_15 = VAR_19;
   VAR_9 = 0;
  }
 }
 for (VAR_18 = VAR_16 ; VAR_18 ; VAR_18 = VAR_18->nfile.next) {
  VAR_21 = VAR_18->nfile.fd;
  if (VAR_21 == 0)
   VAR_11 = 1;
  if ((VAR_18->nfile.type == VAR_6 || VAR_18->nfile.type == VAR_5) &&
      VAR_18->ndup.dupfd == VAR_21)
   continue;

  if ((VAR_17 & VAR_8) && VAR_19->renamed[VAR_21] == VAR_1) {
   VAR_3;
   if ((VAR_20 = FUNC_2(VAR_21, VAR_2, 10)) == -1) {
    switch (VAR_10) {
    case 128:
     VAR_20 = VAR_0;
     break;
    default:
     VAR_4;
     FUNC_1("%d: %s", VAR_21, FUNC_4(VAR_10));
     break;
    }
   }
   VAR_19->renamed[VAR_21] = VAR_20;
   VAR_4;
  }
  FUNC_3(VAR_18, VAR_22);
  VAR_4;
  VAR_3;
 }
 if (VAR_22[1])
  VAR_13 = &VAR_12;
 if (VAR_22[2])
  VAR_14 = &VAR_12;
 VAR_4;
}
