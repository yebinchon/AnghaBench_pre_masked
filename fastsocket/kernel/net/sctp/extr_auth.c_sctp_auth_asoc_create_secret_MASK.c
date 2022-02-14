
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_shared_key {int dummy; } ;
struct sctp_auth_bytes {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sctp_auth_bytes*) ;
 struct sctp_auth_bytes* FUNC_1 (struct sctp_shared_key*,struct sctp_auth_bytes*,struct sctp_auth_bytes*,int ) ;
 int FUNC_2 (struct sctp_auth_bytes*,struct sctp_auth_bytes*) ;
 struct sctp_auth_bytes* FUNC_3 (struct sctp_association const*,int ) ;
 struct sctp_auth_bytes* FUNC_4 (struct sctp_association const*,int ) ;

__attribute__((used)) static struct sctp_auth_bytes *FUNC_5(
     const struct sctp_association *VAR_0,
     struct sctp_shared_key *VAR_1,
     gfp_t VAR_2)
{
 struct sctp_auth_bytes *VAR_3;
 struct sctp_auth_bytes *VAR_4;
 struct sctp_auth_bytes *VAR_5,
    *VAR_6;
 struct sctp_auth_bytes *VAR_7 = ((void*)0);
 int VAR_8;
 VAR_3 = FUNC_3(VAR_0, VAR_2);
 VAR_4 = FUNC_4(VAR_0, VAR_2);

 if (!VAR_4 || !VAR_3)
  goto out;
 VAR_8 = FUNC_2(VAR_3,
     VAR_4);
 if (VAR_8 < 0) {
  VAR_5 = VAR_3;
  VAR_6 = VAR_4;
 } else {
  VAR_5 = VAR_4;
  VAR_6 = VAR_3;
 }

 VAR_7 = FUNC_1(VAR_1, VAR_5, VAR_6,
         VAR_2);
out:
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 return VAR_7;
}
