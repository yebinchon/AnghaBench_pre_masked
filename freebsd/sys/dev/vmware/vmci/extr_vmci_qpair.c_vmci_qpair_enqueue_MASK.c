
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qpair {int flags; int produce_q_size; int consume_q; int produce_q; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,void const*,size_t,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

ssize_t
FUNC_1(struct vmci_qpair *VAR_5, const void *VAR_6, size_t VAR_7,
    int VAR_8)
{
 ssize_t VAR_9;

 if (!VAR_5 || !VAR_6)
  return (VAR_0);

 VAR_9 = FUNC_0(VAR_5->produce_q, VAR_5->consume_q,
     VAR_5->produce_q_size, VAR_6, VAR_7, VAR_8,
     VAR_5->flags & VAR_1?
     VAR_4 : VAR_3,
     !(VAR_5->flags & VAR_2));

 return (VAR_9);
}
