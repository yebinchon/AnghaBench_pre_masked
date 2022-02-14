
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fibnode {void* data; int key; } ;
typedef int fibnode_t ;
typedef int fibheapkey_t ;
typedef int fibheap_t ;


 int FUNC_0 (int ,struct fibnode*,int ) ;

__attribute__((used)) static inline int
FUNC_1 (fibheap_t VAR_0, fibheapkey_t VAR_1, void *VAR_2, fibnode_t VAR_3)
{
  struct fibnode VAR_4;

  VAR_4.key = VAR_1;
  VAR_4.data = VAR_2;

  return FUNC_0 (VAR_0, &VAR_4, VAR_3);
}
