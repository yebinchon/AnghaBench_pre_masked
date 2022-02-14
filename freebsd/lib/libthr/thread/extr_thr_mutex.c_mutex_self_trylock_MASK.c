
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int m_count; int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;





__attribute__((used)) static int
FUNC_1(struct pthread_mutex *VAR_3)
{
 int VAR_4;

 switch (FUNC_0(VAR_3->m_flags)) {
 case 130:
 case 129:
 case 131:
  VAR_4 = VAR_1;
  break;

 case 128:

  if (VAR_3->m_count + 1 > 0) {
   VAR_3->m_count++;
   VAR_4 = 0;
  } else
   VAR_4 = VAR_0;
  break;

 default:

  VAR_4 = VAR_2;
 }

 return (VAR_4);
}
