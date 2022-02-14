
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_cp_sm {scalar_t__ confidentiality_offset; scalar_t__ cipher_offset; scalar_t__ current_cipher_suite; scalar_t__ cipher_suite; } ;



__attribute__((used)) static int FUNC_0(struct ieee802_1x_cp_sm *VAR_0)
{
 return VAR_0->confidentiality_offset != VAR_0->cipher_offset ||
  VAR_0->current_cipher_suite != VAR_0->cipher_suite;
}
