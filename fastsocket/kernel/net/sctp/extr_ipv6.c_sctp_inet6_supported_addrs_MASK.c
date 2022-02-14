
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sock {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_sock const*) ;

__attribute__((used)) static int FUNC_2(const struct sctp_sock *VAR_2,
          __be16 *VAR_3)
{
 VAR_3[0] = VAR_1;
 if (!VAR_2 || !FUNC_0(FUNC_1(VAR_2))) {
  VAR_3[1] = VAR_0;
  return 2;
 }
 return 1;
}
