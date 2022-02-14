
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {int dummy; } ;
struct service {scalar_t__ s_magic; int s_flags; int s_name; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int,int *,int *,int *,int *) ;
 int FUNC_7 (int,int,int ) ;
 int * FUNC_8 (struct service*,int,int *) ;
 struct service_connection* FUNC_9 (struct service*) ;
 int FUNC_10 (struct service_connection*) ;
 struct service_connection* FUNC_11 (struct service_connection*) ;
 int FUNC_12 (struct service*,struct service_connection*) ;
 int FUNC_13 (char*,int ) ;

void
FUNC_14(struct service *VAR_4, int VAR_5, int VAR_6)
{
 struct service_connection *VAR_7, *VAR_8;
 fd_set VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(VAR_4 != ((void*)0));
 FUNC_4(VAR_4->s_magic == VAR_2);
 FUNC_13("%s", VAR_4->s_name);
 FUNC_7(VAR_5, VAR_6, VAR_4->s_flags);

 if (FUNC_8(VAR_4, VAR_5, ((void*)0)) == ((void*)0))
  FUNC_2(1);

 for (;;) {
  FUNC_1(&VAR_9);
  VAR_10 = -1;
  for (VAR_7 = FUNC_9(VAR_4); VAR_7 != ((void*)0);
      VAR_7 = FUNC_11(VAR_7)) {
   VAR_10 = FUNC_5(&VAR_9, VAR_10,
       FUNC_10(VAR_7));
  }

  FUNC_4(VAR_10 >= 0);
  FUNC_4(VAR_10 + 1 <= (int)VAR_1);
  VAR_11 = FUNC_6(VAR_10 + 1, &VAR_9, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_11 < 0) {
   if (VAR_3 != VAR_0)
    FUNC_2(1);
   continue;
  } else if (VAR_11 == 0) {

   FUNC_3();
  }

  for (VAR_7 = FUNC_9(VAR_4); VAR_7 != ((void*)0);
      VAR_7 = VAR_8) {




   VAR_8 = FUNC_11(VAR_7);
   if (FUNC_0(FUNC_10(VAR_7), &VAR_9))
    FUNC_12(VAR_4, VAR_7);
  }
  if (FUNC_9(VAR_4) == ((void*)0)) {



   break;
  }
 }

 FUNC_2(0);
}
