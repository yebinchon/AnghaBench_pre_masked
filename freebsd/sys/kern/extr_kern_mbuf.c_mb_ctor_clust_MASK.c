
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ext_buf; int ext_size; int ext_count; int ext_flags; int ext_type; int * ext_arg2; int * ext_arg1; int * ext_free; } ;
struct mbuf {char* m_data; TYPE_1__ m_ext; int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int,void*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
 struct mbuf *VAR_6;




 VAR_6 = (struct mbuf *)VAR_4;
 if (VAR_6 != ((void*)0)) {
  VAR_6->m_ext.ext_buf = (char *)VAR_2;
  VAR_6->m_data = VAR_6->m_ext.ext_buf;
  VAR_6->m_flags |= VAR_1;
  VAR_6->m_ext.ext_free = ((void*)0);
  VAR_6->m_ext.ext_arg1 = ((void*)0);
  VAR_6->m_ext.ext_arg2 = ((void*)0);
  VAR_6->m_ext.ext_size = VAR_3;
  VAR_6->m_ext.ext_type = FUNC_0(VAR_3);
  VAR_6->m_ext.ext_flags = VAR_0;
  VAR_6->m_ext.ext_count = 1;
 }

 return (0);
}
