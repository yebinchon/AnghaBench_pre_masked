
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ssnmap {int malloced; } ;
typedef int gfp_t ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sctp_ssnmap*) ;
 struct sctp_ssnmap* FUNC_5 (int,int ) ;
 int FUNC_6 (struct sctp_ssnmap*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;

struct sctp_ssnmap *FUNC_8(__u16 VAR_2, __u16 VAR_3,
        gfp_t VAR_4)
{
 struct sctp_ssnmap *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(VAR_2, VAR_3);
 if (VAR_6 <= VAR_0)
  VAR_5 = FUNC_5(VAR_6, VAR_4);
 else
  VAR_5 = (struct sctp_ssnmap *)
     FUNC_1(VAR_4, FUNC_3(VAR_6));
 if (!VAR_5)
  goto fail;

 if (!FUNC_6(VAR_5, VAR_2, VAR_3))
  goto fail_map;

 VAR_5->malloced = 1;
 FUNC_0(VAR_1);

 return VAR_5;

fail_map:
 if (VAR_6 <= VAR_0)
  FUNC_4(VAR_5);
 else
  FUNC_2((unsigned long)VAR_5, FUNC_3(VAR_6));
fail:
 return ((void*)0);
}
