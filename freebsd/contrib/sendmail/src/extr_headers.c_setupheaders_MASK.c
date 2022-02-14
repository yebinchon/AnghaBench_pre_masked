
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hdrinfo {int hi_flags; int * hi_field; } ;
struct TYPE_4__ {int * hi_ruleset; int hi_flags; } ;
struct TYPE_5__ {TYPE_1__ s_header; } ;
typedef TYPE_2__ STAB ;


 struct hdrinfo* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int ,int ) ;

void
FUNC_1()
{
 struct hdrinfo *VAR_3;
 STAB *VAR_4;

 for (VAR_3 = VAR_0; VAR_3->hi_field != ((void*)0); VAR_3++)
 {
  VAR_4 = FUNC_0(VAR_3->hi_field, VAR_2, VAR_1);
  VAR_4->s_header.hi_flags = VAR_3->hi_flags;
  VAR_4->s_header.hi_ruleset = ((void*)0);
 }
}
