
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* XML_Parser ;
struct TYPE_3__ {unsigned long m_hash_secret_salt; struct TYPE_3__* m_parentParser; } ;



__attribute__((used)) static unsigned long
FUNC_0(XML_Parser VAR_0) {
  if (VAR_0->m_parentParser != ((void*)0))
    return FUNC_0(VAR_0->m_parentParser);
  return VAR_0->m_hash_secret_salt;
}
