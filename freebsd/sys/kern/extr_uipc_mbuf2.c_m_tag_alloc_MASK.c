
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct m_tag {int m_tag_free; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct m_tag*,int ,int,int) ;
 struct m_tag* FUNC_2 (int,int ,int) ;

struct m_tag *
FUNC_3(uint32_t VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct m_tag *VAR_6;

 FUNC_0(VAR_5);
 if (VAR_4 < 0)
  return ((void*)0);
 VAR_6 = FUNC_2(VAR_4 + sizeof(struct m_tag), VAR_0, VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4);
 VAR_6->m_tag_free = VAR_1;
 return VAR_6;
}
