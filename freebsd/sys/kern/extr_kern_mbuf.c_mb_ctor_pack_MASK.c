
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ext_buf; } ;
struct mbuf {int m_flags; TYPE_1__ m_ext; int m_data; } ;
struct mb_args {int flags; short type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mbuf*,int,short,int) ;
 int FUNC_2 (int ,int ,void*,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, int VAR_4, void *VAR_5, int VAR_6)
{
 struct mbuf *VAR_7;
 struct mb_args *VAR_8;
 int VAR_9, VAR_10;
 short VAR_11;

 VAR_7 = (struct mbuf *)VAR_3;
 VAR_8 = (struct mb_args *)VAR_5;
 VAR_10 = VAR_8->flags;
 VAR_11 = VAR_8->type;
 FUNC_0((VAR_10 & VAR_2) == 0);





 VAR_9 = FUNC_1(VAR_7, VAR_6, VAR_11, VAR_10);


 VAR_7->m_data = VAR_7->m_ext.ext_buf;
  VAR_7->m_flags = (VAR_10 | VAR_1);

 return (VAR_9);
}
