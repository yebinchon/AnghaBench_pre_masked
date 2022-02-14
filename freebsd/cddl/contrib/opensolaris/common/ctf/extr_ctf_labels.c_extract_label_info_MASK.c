
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef int ctf_lblent_t ;
struct TYPE_7__ {int cth_lbloff; int cth_objtoff; } ;
typedef TYPE_2__ ctf_header_t ;
struct TYPE_6__ {scalar_t__ cts_data; } ;
struct TYPE_8__ {scalar_t__ ctf_version; int ctf_buf; TYPE_1__ ctf_data; } ;
typedef TYPE_3__ ctf_file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_1(ctf_file_t *VAR_2, const ctf_lblent_t **VAR_3, uint_t *VAR_4)
{
 const ctf_header_t *VAR_5;




 if (VAR_2->ctf_version < VAR_0)
  return (FUNC_0(VAR_2, VAR_1));

 VAR_5 = (const ctf_header_t *)VAR_2->ctf_data.cts_data;


 *VAR_3 = (const ctf_lblent_t *)(VAR_2->ctf_buf + VAR_5->cth_lbloff);
 *VAR_4 = (VAR_5->cth_objtoff - VAR_5->cth_lbloff) / sizeof (ctf_lblent_t);

 return (0);
}
