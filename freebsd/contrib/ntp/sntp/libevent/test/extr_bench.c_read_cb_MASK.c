
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int evutil_socket_t ;
typedef int ev_ssize_t ;
typedef int ev_intptr_t ;
typedef int ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_6, short VAR_7, void *VAR_8)
{
 ev_intptr_t VAR_9 = (ev_intptr_t) VAR_8, VAR_10 = VAR_9 + 1;
 u_char VAR_11;
 ev_ssize_t VAR_12;

 VAR_12 = FUNC_0(VAR_6, (char*)&VAR_11, sizeof(VAR_11), 0);
 if (VAR_12 >= 0)
  VAR_0 += VAR_12;
 else
  VAR_1++;
 if (VAR_5) {
  if (VAR_10 >= VAR_3)
   VAR_10 -= VAR_3;
  VAR_12 = FUNC_1(VAR_4[2 * VAR_10 + 1], "e", 1, 0);
  if (VAR_12 != 1)
   VAR_1++;
  VAR_5--;
  VAR_2++;
 }
}
