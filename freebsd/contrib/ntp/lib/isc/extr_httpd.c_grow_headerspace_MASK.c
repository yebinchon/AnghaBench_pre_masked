
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_7__ {int length; int base; } ;
typedef TYPE_2__ isc_region_t ;
struct TYPE_8__ {unsigned int headerlen; TYPE_1__* mgr; int headerbuffer; } ;
typedef TYPE_3__ isc_httpd_t ;
struct TYPE_6__ {int mctx; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 char* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static isc_result_t
FUNC_4(isc_httpd_t *VAR_5)
{
 char *VAR_6;
 unsigned int VAR_7;
 isc_region_t VAR_8;

 VAR_7 = VAR_5->headerlen + VAR_0;
 if (VAR_7 > VAR_1)
  return (VAR_3);

 VAR_6 = FUNC_2(VAR_5->mgr->mctx, VAR_7);
 if (VAR_6 == ((void*)0))
  return (VAR_2);
 FUNC_0(&VAR_5->headerbuffer, &VAR_8);
 FUNC_1(&VAR_5->headerbuffer, VAR_6, VAR_7);

 FUNC_3(VAR_5->mgr->mctx, VAR_8.base, VAR_8.length);

 return (VAR_4);
}
