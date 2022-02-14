
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int (* ccid_hc_tx_parse_options ) (struct sock*,unsigned char,unsigned char,int ,unsigned char*) ;} ;


 int FUNC_0 (struct sock*,unsigned char,unsigned char,int ,unsigned char*) ;

__attribute__((used)) static inline int FUNC_1(struct ccid *VAR_0, struct sock *VAR_1,
        unsigned char VAR_2,
        unsigned char VAR_3, u16 VAR_4,
        unsigned char* VAR_5)
{
 int VAR_6 = 0;
 if (VAR_0->ccid_ops->ccid_hc_tx_parse_options != ((void*)0))
  VAR_6 = VAR_0->ccid_ops->ccid_hc_tx_parse_options(VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5);
 return VAR_6;
}
