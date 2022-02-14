
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {scalar_t__ ctrl_max_seqno; scalar_t__ ctrl_seqno; } ;



__attribute__((used)) static inline int FUNC_0(struct rsocket *VAR_0)
{
 return (int)((VAR_0->ctrl_seqno + 1) - VAR_0->ctrl_max_seqno) < 0;
}
