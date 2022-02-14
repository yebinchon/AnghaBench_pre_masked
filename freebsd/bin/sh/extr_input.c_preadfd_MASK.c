
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fd; int buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (scalar_t__,int*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_6(void)
{
 int VAR_10;
 VAR_9 = VAR_8->buf;

retry:

 if (VAR_8->fd == 0 && VAR_6) {
  static const char *VAR_11;
  static int VAR_12;

  if (VAR_11 == ((void*)0)) {
   FUNC_1(VAR_6);
   VAR_11 = FUNC_0(VAR_6, &VAR_12);
  }
  if (VAR_11 == ((void*)0))
   VAR_10 = VAR_12 == 0 ? 0 : -1;
  else {
   VAR_10 = VAR_12;
   if (VAR_10 > VAR_0)
    VAR_10 = VAR_0;
   FUNC_3(VAR_8->buf, VAR_11, VAR_10);
   if (VAR_10 != VAR_12) {
    VAR_12 -= VAR_10;
    VAR_11 += VAR_10;
   } else
    VAR_11 = ((void*)0);
  }
 } else

  VAR_10 = FUNC_5(VAR_8->fd, VAR_8->buf, VAR_0);

 if (VAR_10 <= 0) {
                if (VAR_10 < 0) {
                        if (VAR_7 == VAR_1)
                                goto retry;
                        if (VAR_8->fd == 0 && VAR_7 == VAR_2) {
                                int VAR_13 = FUNC_2(0, VAR_3, 0);
                                if (VAR_13 >= 0 && VAR_13 & VAR_5) {
                                        VAR_13 &=~ VAR_5;
                                        if (FUNC_2(0, VAR_4, VAR_13) >= 0) {
      FUNC_4("sh: turning off NDELAY mode\n");
                                                goto retry;
                                        }
                                }
                        }
                }
                VAR_10 = -1;
 }
 return VAR_10;
}
