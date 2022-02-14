
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int flags; int return_value; int matching; int extract_flags; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct archive* FUNC_0 () ;
 int FUNC_1 (struct archive*,int ) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (struct bsdtar*,char,struct archive*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

void
FUNC_7(struct bsdtar *VAR_2)
{
 struct archive *VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3 == ((void*)0))
  FUNC_4(1, VAR_0, "Cannot allocate disk writer object");
 if ((VAR_2->flags & VAR_1) == 0)
  FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_2->extract_flags);

 FUNC_5(VAR_2, 'x', VAR_3);

 if (FUNC_6(VAR_2->matching,
     "Not found in archive") != 0)
  VAR_2->return_value = 1;
 FUNC_3(VAR_3);
}
