
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sipkey {void** k; } ;


 void* FUNC_0 (unsigned char const*) ;

__attribute__((used)) static struct sipkey *FUNC_1(struct sipkey *VAR_0, const void *VAR_1) {
 VAR_0->k[0] = FUNC_0((const unsigned char *)VAR_1);
 VAR_0->k[1] = FUNC_0((const unsigned char *)VAR_1 + 8);
 return VAR_0;
}
