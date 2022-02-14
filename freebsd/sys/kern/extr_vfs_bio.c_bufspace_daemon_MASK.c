
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {scalar_t__ bd_bufspace; scalar_t__ bd_lobufspace; scalar_t__ bd_freebuffers; scalar_t__ bd_hifreebuffers; scalar_t__ bd_wanted; } ;


 int FUNC_0 (struct bufdomain*) ;
 int FUNC_1 (struct bufdomain*) ;
 int FUNC_2 (struct bufdomain*) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (struct bufdomain*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct bufdomain*,int) ;
 int FUNC_7 (struct bufdomain*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__*,int ,int,char*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_11(void *VAR_7)
{
 struct bufdomain *VAR_8;

 FUNC_3(VAR_6, VAR_5, VAR_3,
     VAR_2 + 100);

 VAR_8 = VAR_7;
 for (;;) {
  FUNC_8();
  while (VAR_8->bd_bufspace > VAR_8->bd_lobufspace ||
      VAR_8->bd_freebuffers < VAR_8->bd_hifreebuffers) {
   if (FUNC_6(VAR_8, 0) != 0) {
    if (FUNC_4(VAR_8))
     continue;
    FUNC_5();
    FUNC_0(VAR_8);
    if (VAR_8->bd_wanted) {
     FUNC_10(&VAR_8->bd_wanted, FUNC_1(VAR_8),
         VAR_1|VAR_0, "bufspace", VAR_4/10);
    } else
     FUNC_2(VAR_8);
   }
   FUNC_9();
  }
  FUNC_7(VAR_8);
 }
}
