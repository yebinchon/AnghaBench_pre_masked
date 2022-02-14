
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_ematch {int datalen; unsigned long data; } ;
struct tcf_em_nbyte {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct tcf_proto *VAR_3, void *VAR_4, int VAR_5,
      struct tcf_ematch *VAR_6)
{
 struct tcf_em_nbyte *VAR_7 = VAR_4;

 if (VAR_5 < sizeof(*VAR_7) ||
     VAR_5 < (sizeof(*VAR_7) + VAR_7->len))
  return -VAR_0;

 VAR_6->datalen = sizeof(*VAR_7) + VAR_7->len;
 VAR_6->data = (unsigned long)FUNC_0(VAR_4, VAR_6->datalen, VAR_2);
 if (VAR_6->data == 0UL)
  return -VAR_1;

 return 0;
}
