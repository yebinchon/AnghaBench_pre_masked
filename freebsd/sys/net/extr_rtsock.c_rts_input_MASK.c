
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockproto {unsigned short sp_protocol; int sp_family; } ;
struct mbuf {int dummy; } ;
struct m_tag {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,struct m_tag*) ;
 struct m_tag* FUNC_1 (struct mbuf*,int ,int *) ;
 int FUNC_2 (struct mbuf*,struct sockproto*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct mbuf *VAR_4)
{
 struct sockproto VAR_5;
 unsigned short *VAR_6;
 struct m_tag *VAR_7;

 VAR_5.sp_family = VAR_1;
 VAR_7 = FUNC_1(VAR_4, VAR_0, ((void*)0));
 if (VAR_7 != ((void*)0)) {
  VAR_6 = (unsigned short *)(VAR_7 + 1);
  VAR_5.sp_protocol = *VAR_6;
  FUNC_0(VAR_4, VAR_7);
 } else
  VAR_5.sp_protocol = 0;

 FUNC_2(VAR_4, &VAR_5, &VAR_3, VAR_2);
}
