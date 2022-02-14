
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_tag {scalar_t__ m_tag_id; int m_tag_len; int m_tag_cookie; } ;


 int FUNC_0 (struct m_tag*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct m_tag*,struct m_tag*,int ) ;
 struct m_tag* FUNC_3 (int ,scalar_t__,int ,int) ;
 int FUNC_4 (struct m_tag*) ;
 int FUNC_5 (struct m_tag*,struct m_tag*) ;
 scalar_t__ FUNC_6 (struct m_tag*,int) ;

struct m_tag *
FUNC_7(struct m_tag *VAR_1, int VAR_2)
{
 struct m_tag *VAR_3;

 FUNC_1(VAR_2);
 FUNC_0(VAR_1, ("m_tag_copy: null tag"));
 VAR_3 = FUNC_3(VAR_1->m_tag_cookie, VAR_1->m_tag_id, VAR_1->m_tag_len, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
  FUNC_2(VAR_1 + 1, VAR_3 + 1, VAR_1->m_tag_len);
 return VAR_3;
}
