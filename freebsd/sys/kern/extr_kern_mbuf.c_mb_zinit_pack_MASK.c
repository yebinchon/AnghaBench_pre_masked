
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ext_buf; int ext_type; } ;
struct mbuf {TYPE_1__ m_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int ,struct mbuf*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(void *VAR_4, int VAR_5, int VAR_6)
{
 struct mbuf *VAR_7;

 VAR_7 = (struct mbuf *)VAR_4;
 if (FUNC_1(VAR_3, VAR_7, VAR_6) == ((void*)0) ||
     VAR_7->m_ext.ext_buf == ((void*)0))
  return (VAR_0);
 VAR_7->m_ext.ext_type = VAR_1;



 return (0);
}
