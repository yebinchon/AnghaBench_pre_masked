
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_priv {scalar_t__ periods; scalar_t__ byte_offset; scalar_t__ period_len; scalar_t__ buffer_len; int * substream; } ;



__attribute__((used)) static void FUNC_0(struct fsi_priv *VAR_0)
{
 VAR_0->substream = ((void*)0);
 VAR_0->buffer_len = 0;
 VAR_0->period_len = 0;
 VAR_0->byte_offset = 0;
 VAR_0->periods = 0;
}
