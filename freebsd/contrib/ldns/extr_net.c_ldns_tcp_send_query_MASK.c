
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int ldns_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_6 (int,void*,int,int ,struct sockaddr*,int ) ;
 int VAR_1 ;

ssize_t
FUNC_7(ldns_buffer *VAR_2, int VAR_3,
                    const struct sockaddr_storage *VAR_4, socklen_t VAR_5)
{
 VAR_1 *VAR_0;
 ssize_t VAR_6;


 VAR_0 = FUNC_1(VAR_1, FUNC_3(VAR_2) + 2);
 if(!VAR_0) return 0;
 FUNC_4(VAR_0, FUNC_3(VAR_2));
 FUNC_5(VAR_0 + 2, FUNC_2(VAR_2), FUNC_3(VAR_2));

 VAR_6 = FUNC_6(VAR_3, (void*)VAR_0,
   FUNC_3(VAR_2) + 2, 0, (struct sockaddr *)VAR_4, VAR_5);

        FUNC_0(VAR_0);

 if (VAR_6 == -1 || (size_t) VAR_6 != FUNC_3(VAR_2) + 2 ) {
  return 0;
 }
 return VAR_6;
}
