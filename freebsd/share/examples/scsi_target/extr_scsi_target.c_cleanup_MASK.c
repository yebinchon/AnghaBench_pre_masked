
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_hdr {int dummy; } ;
struct TYPE_2__ {int tqe; } ;


 struct ccb_hdr* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ccb_hdr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (int,int ,scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6()
{
 struct ccb_hdr *VAR_8;

 if (VAR_2) {
  FUNC_5("cleanup called");
  VAR_2 = 0;
  FUNC_4(VAR_6, VAR_0, &VAR_2);
 }
 FUNC_4(VAR_6, VAR_1, ((void*)0));
 FUNC_2(VAR_6);

 while ((VAR_8 = FUNC_0(&VAR_4)) != ((void*)0)) {
  FUNC_1(&VAR_4, VAR_8, VAR_5.tqe);
  FUNC_3((union ccb *)VAR_8);
 }
 while ((VAR_8 = FUNC_0(&VAR_7)) != ((void*)0)) {
  FUNC_1(&VAR_7, VAR_8, VAR_5.tqe);
  FUNC_3((union ccb *)VAR_8);
 }

 if (VAR_3 != -1)
  FUNC_2(VAR_3);
}
