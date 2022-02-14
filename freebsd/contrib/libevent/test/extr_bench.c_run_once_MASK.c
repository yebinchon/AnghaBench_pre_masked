
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int evutil_socket_t ;
typedef scalar_t__ ev_intptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int,int ,void*) ;
 int * VAR_5 ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (struct timeval*,struct timeval*,struct timeval*) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int,int) ;
 long VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int,char*,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static struct timeval *
FUNC_9(void)
{
 evutil_socket_t *VAR_14, VAR_15;
 long VAR_16;
 static struct timeval VAR_17, VAR_18;

 for (VAR_14 = VAR_10, VAR_16 = 0; VAR_16 < VAR_8; VAR_16++, VAR_14 += 2) {
  if (FUNC_2(&VAR_5[VAR_16]))
   FUNC_1(&VAR_5[VAR_16]);
  FUNC_4(&VAR_5[VAR_16], VAR_14[0], VAR_3 | VAR_2, VAR_11, (void *)(ev_intptr_t) VAR_16);
  FUNC_0(&VAR_5[VAR_16], ((void*)0));
 }

 FUNC_3(VAR_1 | VAR_0);

 VAR_6 = 0;
 VAR_15 = VAR_8 / VAR_7;
 VAR_15 = VAR_15 * 2;
 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++, VAR_6++)
  (void) FUNC_8(VAR_10[VAR_16 * VAR_15 + 1], "e", 1, 0);

 VAR_4 = 0;
 VAR_13 = VAR_9;
 { int VAR_19 = 0;
 FUNC_5(&VAR_17, ((void*)0));
 do {
  FUNC_3(VAR_1 | VAR_0);
  VAR_19++;
 } while (VAR_4 != VAR_6);
 FUNC_5(&VAR_18, ((void*)0));

 if (VAR_19 != VAR_4) FUNC_7(VAR_12, "Xcount: %d, Rcount: %d\n", VAR_19, VAR_4);
 }

 FUNC_6(&VAR_18, &VAR_17, &VAR_18);

 return (&VAR_18);
}
