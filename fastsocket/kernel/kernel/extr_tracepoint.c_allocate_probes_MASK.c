
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_probes {void* probes; } ;


 int VAR_0 ;
 struct tp_probes* FUNC_0 (int,int ) ;

__attribute__((used)) static inline void *FUNC_1(int VAR_1)
{
 struct tp_probes *VAR_2 = FUNC_0(VAR_1 * sizeof(void *)
   + sizeof(struct tp_probes), VAR_0);
 return VAR_2 == ((void*)0) ? ((void*)0) : VAR_2->probes;
}
