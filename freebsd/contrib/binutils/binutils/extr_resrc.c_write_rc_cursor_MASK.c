
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_3__ {scalar_t__ data; scalar_t__ length; scalar_t__ yhotspot; scalar_t__ xhotspot; } ;
typedef TYPE_1__ rc_cursor ;
typedef int bfd_byte ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int const*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_0, const rc_cursor *VAR_1)
{
  FUNC_0 (VAR_0, "BEGIN\n");
  FUNC_1 (VAR_0, 2);
  FUNC_0 (VAR_0, " 0x%x, 0x%x,\t/* Hotspot x: %d, y: %d.  */\n",
    (unsigned int) VAR_1->xhotspot, (unsigned int) VAR_1->yhotspot,
    (int) VAR_1->xhotspot, (int) VAR_1->yhotspot);
  FUNC_2 (VAR_0, (rc_uint_type) VAR_1->length, (const bfd_byte *) VAR_1->data,
          0, 0, 0);
  FUNC_0 (VAR_0, "END\n");
}
