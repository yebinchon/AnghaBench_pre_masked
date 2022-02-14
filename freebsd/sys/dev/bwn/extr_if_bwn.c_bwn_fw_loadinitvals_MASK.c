
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fw; } ;
struct bwn_fw {TYPE_2__ initvals_band; TYPE_2__ initvals; } ;
struct bwn_mac {struct bwn_fw mac_fw; } ;
struct bwn_fwhdr {int size; } ;
struct TYPE_3__ {scalar_t__ datasize; scalar_t__ data; } ;


 int FUNC_0 (TYPE_2__,size_t const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct bwn_mac *VAR_0)
{


 const size_t VAR_1 = sizeof(struct bwn_fwhdr);
 const struct bwn_fwhdr *VAR_2;
 struct bwn_fw *VAR_3 = &VAR_0->mac_fw;
 int VAR_4;

 VAR_2 = (const struct bwn_fwhdr *)(VAR_3->initvals.fw->data);
 VAR_4 = FUNC_2(VAR_0, ((const struct bwn_fwinitvals *)((const char *)VAR_3->initvals.fw->data + VAR_1)),
     FUNC_1(VAR_2->size), VAR_3->initvals.fw->datasize - VAR_1);
 if (VAR_4)
  return (VAR_4);
 if (VAR_3->initvals_band.fw) {
  VAR_2 = (const struct bwn_fwhdr *)(VAR_3->initvals_band.fw->data);
  VAR_4 = FUNC_2(VAR_0,
      ((const struct bwn_fwinitvals *)((const char *)VAR_3->initvals_band.fw->data + VAR_1)),
      FUNC_1(VAR_2->size),
      VAR_3->initvals_band.fw->datasize - VAR_1);
 }
 return (VAR_4);

}
