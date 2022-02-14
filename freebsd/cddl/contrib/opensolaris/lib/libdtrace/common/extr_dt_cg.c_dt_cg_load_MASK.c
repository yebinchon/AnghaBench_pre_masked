
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint_t ;
typedef int ssize_t ;
struct TYPE_5__ {int dn_flags; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_6__ {int cte_bits; } ;
typedef TYPE_2__ ctf_encoding_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,long) ;

__attribute__((used)) static uint_t
FUNC_5(dt_node_t *VAR_6, ctf_file_t *VAR_7, ctf_id_t VAR_8)
{
 static const uint_t VAR_9[] = {
  138, 137, 0, 136,
  0, 0, 0, 135,
  141, 140, 0, 139,
  0, 0, 0, 135,
  131, 130, 0, 129,
  0, 0, 0, 128,
  134, 133, 0, 132,
  0, 0, 0, 128,
 };

 ctf_encoding_t VAR_10;
 ssize_t VAR_11;






 if ((VAR_6->dn_flags & VAR_1) &&
     FUNC_2(VAR_7, VAR_8, &VAR_10) != VAR_0)
  VAR_11 = FUNC_1(FUNC_0(VAR_10.cte_bits, VAR_5) / VAR_5);
 else
  VAR_11 = FUNC_3(VAR_7, VAR_8);

 if (VAR_11 < 1 || VAR_11 > 8 || (VAR_11 & (VAR_11 - 1)) != 0) {
  FUNC_4(VAR_4, "internal error -- cg cannot load "
      "size %ld when passed by value\n", (long)VAR_11);
 }

 VAR_11--;

 if (VAR_6->dn_flags & VAR_2)
  VAR_11 |= 0x08;
 if (VAR_6->dn_flags & VAR_3)
  VAR_11 |= 0x10;

 return (VAR_9[VAR_11]);
}
