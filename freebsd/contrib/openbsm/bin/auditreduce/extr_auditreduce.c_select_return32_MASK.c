
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int e_type; } ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_9__ {TYPE_2__ hdr32; TYPE_1__ ret32; } ;
struct TYPE_10__ {TYPE_3__ tt; } ;
typedef TYPE_4__ tokenstr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(tokenstr_t VAR_6, tokenstr_t VAR_7, uint32_t *VAR_8)
{
 int VAR_9;

 FUNC_1((*VAR_8), (VAR_3));
 if (VAR_6 == 0)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;
 if (FUNC_0(VAR_5, VAR_3)) {
  if (FUNC_2(VAR_7, &VAR_4, VAR_9,
      VAR_2) != 1)
   return (0);
 }
 return (1);
}
