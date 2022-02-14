
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int br_x509_trust_anchor ;
struct TYPE_4__ {size_t trust_anchors_num; int const* trust_anchors; int const* dn_hash_impl; int * vtable; } ;
typedef TYPE_1__ br_x509_minimal_context ;
typedef int br_hash_class ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1(br_x509_minimal_context *VAR_1,
 const br_hash_class *VAR_2,
 const br_x509_trust_anchor *VAR_3, size_t VAR_4)
{
 FUNC_0(VAR_1, 0, sizeof *VAR_1);
 VAR_1->vtable = &VAR_0;
 VAR_1->dn_hash_impl = VAR_2;
 VAR_1->trust_anchors = VAR_3;
 VAR_1->trust_anchors_num = VAR_4;
}
