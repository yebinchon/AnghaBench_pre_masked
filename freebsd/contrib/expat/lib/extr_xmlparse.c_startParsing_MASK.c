
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
typedef int XML_Bool ;
struct TYPE_5__ {scalar_t__ m_hash_secret_salt; scalar_t__ m_ns; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static XML_Bool
FUNC_2(XML_Parser VAR_2)
{

    if (VAR_2->m_hash_secret_salt == 0)
      VAR_2->m_hash_secret_salt = FUNC_0(VAR_2);
    if (VAR_2->m_ns) {



      return FUNC_1(VAR_2, VAR_1);
    }
    return VAR_0;
}
